from typing import List

def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_num = min(numbers)
    max_num = max(numbers)
    scaled_numbers = [(num - min_num) / (max_num - min_num) for num in numbers]
    return scaled_numbers

def main():
    numbers = input().split()
    numbers = [float(num) for num in numbers]
    scaled_numbers = rescale_to_unit(numbers)
    print(scaled_numbers)
    
if __name__ == "__main__":
    main()