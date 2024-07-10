def digitSum(n):
    return sum(int(d) for d in str(n).replace(" ", "").lower() if d.isdigit())