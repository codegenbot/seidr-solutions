def decode_cyclic(s: str):
    result = []
    temp = ""
    if len(s) >= 3:
        for char in s:
            try:
                temp += char
                if len(temp) == 3:
                    if len(result) > 0 and result[-1] == temp[1]:
                        temp = temp[2:] + temp[:2]
                    result.append(temp)
                    temp = ""
            except Exception as e:
                print(f"An error occurred: {e}")
    if len(s) % 3 != 0:
        try:
            result.append(temp + (temp[: len(s) - len(temp)] * 2))
        except Exception as e:
            print(f"An error occurred: {e}")
    return "".join(result)