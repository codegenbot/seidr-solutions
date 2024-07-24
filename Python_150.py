```
def x_or_y(n, x, y):
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num**0.5) + 1):
            if num % i == 0:
                return False
        return True
    
    count = 0
    while x_or_y_helper(n, count) <= n:
        if is_prime(x_or_y_helper(n, count)):
            return str(count)
        count += 1

def x_or_y_helper(n, count):
    sum = 0
    for i in range(2, count + 1):
        if is_prime(i):
            sum += i
    return sum