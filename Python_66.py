def digitSum(n):
    n = str(n).lower()
    return sum(int(char) for char in str(n).lower() if char.isdigit())