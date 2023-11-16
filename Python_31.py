import math



def is_prime(number):
    'Return true if a given number is prime, and false otherwise.'

    if number % 2 == 0:
        return False
    return all(number % i for i in range(3, int(math.ceil(math.sqrt(number))) + 1, 2))


if __name__ == '__main__':
    print(is_prime(6))
    print(is_prime(101))
    print(is_prime(11))
    print(is_prime(13441))
    print(is_prime(61))
    print(is_prime(4))
    print(is_prime(1))
