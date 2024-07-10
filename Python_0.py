Here is the corrected code:

def find_close_elements():
    num_list = []
    threshold = float(input("Enter the threshold: "))
    
    while True:
        user_input = input("Enter a number (or 'done' if finished): ")
        
        if user_input.lower() == 'done':
            break
        else:
            try:
                num_list.append(float(user_input))
            except ValueError:
                print("Invalid input. Please enter a number or type 'done' to finish.")
    
    from typing import List

    def has_close_elements(numbers: List[float], threshold: float) -> bool:
        for i in range(len(numbers)):
            for j in range(i + 1, len(numbers)):
                if abs(numbers[i] - numbers[j]) <= threshold:
                    return True
        return False

    print(has_close_elements(num_list, threshold))