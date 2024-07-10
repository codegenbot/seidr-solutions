def find_closest_pairs(input_str: str) -> None:
    input_list = list(map(float, input_str.split()))
    threshold = float(input("Enter the threshold value: "))
    
    def has_close_elements(numbers: List[float], threshold: float) -> bool:
        for i in range(len(numbers)):
            for j in range(i + 1, len(numbers)):
                if abs(numbers[i] - numbers[j]) <= threshold:
                    return True
        return False

    print("Do the given numbers have close elements? ", has_close_elements(input_list, threshold))