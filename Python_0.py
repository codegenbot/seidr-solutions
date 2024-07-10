def has_close_elements() -> None:
    numbers = [
        float(num) for num in input("Enter the numbers separated by space: ").split()
    ]
    threshold = float(input("Enter the threshold: "))
    from typing import List

    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if abs(numbers[i] - numbers[j]) <= threshold:
                print(
                    f"Numbers {numbers[i]} and {numbers[j]} are within the threshold."
                )
                return True
    print("No numbers are within the threshold.")