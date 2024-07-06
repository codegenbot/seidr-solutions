def digits(n):
    product = n
    while product:
        product //= 10
    return product