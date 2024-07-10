from typing import List


def main():
    def check(factorize: List[int]) -> bool:
        if len(factorize) == 0:
            return True
        for i in range(2, int(factorize[0] ** 0.5) + 1):
            while factorize[0] % i == 0:
                factorize[0] //= i
        return factorize[0] == 1