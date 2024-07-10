from typing import List


def main():
    n = [None] * 4
    for i in range(4):
        while True:
            try:
                num = int(input(f"Enter an integer ({i+1}/4): "))
                if num not in n:
                    n[i] = num
                    break
                else:
                    print("Duplicate input. Please enter unique numbers.")
            except ValueError:
                print("Invalid input. Please enter a valid integer.")

    factors1 = []
    i = 2
    while i * i <= n[0]:
        if n[0] % i:
            i += 1
        else:
            count = 0
            while n[0] > 1 and n[0] % i == 0:
                n[0] //= i
                count += 1
            factors1.extend([i] * count)
    if n[0] > 1:
        factors1.append(n[0])

    common_factors = []
    i = 2
    while i <= max(2, min(num for num in n)):
        if all(num % i == 0 for num in n):
            count = 0
            while all(num > 1 and num % i == 0 for num in n):
                for num in n:
                    num //= i
                count += 1
            common_factors.extend([i] * count)
        elif any(num % i for num in n):
            i += 1
        else:
            break

    if common_factors:
        print(f"{', '.join(map(str, set(common_factors)))} are the common factors between {n}.")
    else:
        print(f"No common factor found between {n}.")


if __name__ == "__main__":
    main()