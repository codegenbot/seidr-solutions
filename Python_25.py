from typing import List


def main():
    def check(factorize):
        num = int(input("Enter a number: "))
        for i in range(2, num + 1):
            if all(
                x not in factorize(y)
                for x in factorize(i)
                for y in factorize
                if x != y and x < y
            ):
                return str(num)

    print(check(list))