def digitSum(n):
    return sum(int(char) for char in str(n) if char.isdigit())