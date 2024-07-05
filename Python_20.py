from typing import List, Tuple

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    if len(numbers) < 2:
        return (0.0, 0.0)  # Return immediately if there are fewer than 2 numbers

    numbers.sort()
    min_diff = float("inf")
    closest_pair = (0.0, 0.0)

    for i in range(len(numbers) - 1):
        diff = numbers[i + 1] - numbers[i]
        if diff < min_diff:
            min_diff = diff
            closest_pair = (numbers[i], numbers[i + 1])

    return closest_pair

def main():
    import sys
    input = sys.stdin.read
    try:
        nums = list(map(float, input().split()))
        if len(nums) < 2:
            print((0.0, 0.0))
        else:
            print(find_closest_elements(nums))
    except ValueError:
        print((0.0, 0.0))

if __name__ == "__main__":
    main()