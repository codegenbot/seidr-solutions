from typing import List


def factorize(n: int) -> List[int]:
    if n <= 1:
        return []

    factors = []
    i = 2
    while i * i <= n:
        if n % i == 0:
            n //= i
            factors.append(i)
        else:
            i += 1
    if n > 1:
        factors.append(n)
    return factors


def main():
    user_input = input().split(",")
    if not user_input:
        print("No input provided")
        return

    try:
        user_input = list(map(int, user_input))
        result = [factorize(n) for n in user_input]
        output = " ".join(str(f) for sublist in result for f in sublist)
        print(output)
    except ValueError:
        print("Invalid input")


if __name__ == "__main__":
    main()