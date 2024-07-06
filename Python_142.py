```
def sum_squares(lst):
    total_sum = 0
    for element in lst:
        if isinstance(element, dict):  
            total_sum += sum_squares(list(element.values()))  
        elif not isinstance(element, (int, float)):
            raise ValueError(f"Invalid input '{element}' found. Input must contain only numbers.")
        else:
            total_sum += abs(element) ** 2
    return total_sum

def main():
    print(sum_squares([1, 2, 3]))

if __name__ == "__main__":
    main()