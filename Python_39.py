def nth_mixed_number(n: int):
    result = ""
    for i in range(1, n + 1):
        if i % 3 == 0:
            result += "IV"
        elif i % 2 == 0:
            result += "II"
        else:
            result += str(i)