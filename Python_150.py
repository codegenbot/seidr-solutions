def x_or_y():
    n = int(input("Enter a number: "))
    x = int(input("Enter value of x: "))
    y = int(input("Enter value of y: "))

    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num**0.5) + 1):
            if num % i == 0:
                return False
        return True

    if is_prime(n):
        return x
    else:
        return y