
def fizz_buzz(n):
    count = 0
    for i in range(1, n + 1):
        if re.search("7$", str(i)):
            count += 1
    return count