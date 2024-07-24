```
def digitSum(n):
    return sum(int(digit) for digit in str(abs(int(n))).replace(" ", "").lower().replace(",", "").replace(".", ""))