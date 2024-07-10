def main():
    def modp(a, b):
        result = 1
        while b > 0:
            if b % 2 == 1:
                result = (result * a) % 
            a = (a * a) % p
            b //= 2
        return result