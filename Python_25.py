from typing import List

def main():
    n = int(input().strip())

    def factorize(n: int) -> List[int]:
        factors = []
        divisor = 2
        while n > 1:
            if n % divisor == 0:
                factors.append(divisor)
                n //= divisor
            else:
                divisor += 1
        return factors

    result = factorize(n)

    print(result)

# Call the main function to run the code
main()