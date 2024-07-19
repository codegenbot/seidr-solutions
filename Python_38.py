Here is the completed code:

def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s:
        if len(temp) < 3:
            temp += char
        else:
            if temp[0] == char:
                while len(result) % 3 != 0 and result:
                    end_index = result.index(temp[0])
                    first_three_chars = result[:end_index+1]
                    result.pop(end_index)
                    result.insert(0, first_three_chars)
                if temp:
                    temp = ""
            else:
                result.append(char)
    while len(result) % 3 != 0 and result:
        end_index = result.index(temp[0])
        first_three_chars = result[:end_index+1]
        result.pop(end_index)
        result.insert(0, first_three_chars)
    return "".join(result + temp)