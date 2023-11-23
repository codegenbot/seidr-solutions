from typing import List


def has_close_elements(numbers: List[float], threshold: float) -> bool:
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if abs(numbers[i] - numbers[j]) < threshold:
                return True
    return False


def solve(input_str: str) -> bool:
    inputs = input_str.strip().split()
    numbers = list(map(float, inputs[0:-1]))
    threshold = float(inputs[-1])
    return has_close_elements(numbers, threshold)


def main():
    input_str = input()
    print(solve(input_str))


if __name__ == "__main__":
    main()