```
def digitSum(n):
    n = str(n).replace(" ", "").lower().replace(",", "").replace(".", "")
    return sum(int(digit) for digit in n if n.isnumeric())