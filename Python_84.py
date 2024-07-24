def solve(K):
    if K < 2:
        return "1"
    if K == 2:
        return "10"
    result = ""
    while K > 0:
        remainder = K % 2
        if remainder == 1:
            result = "1" + result
        else:
            result = "0" + result
        K = math.floor(K / 2)
    return result