from typing import List


def main():
    def check(factorize: List[int]):
        num = int(input("Enter a number to factorize: "))
        result = []
        for i in range(2, num):
            if num % i == 0:
                factorize.append(i)
                while num % i == 0:
                    num //= i
        if num > 1:
            factorize.append(num)
        print("Factors:", *factorize)


main()