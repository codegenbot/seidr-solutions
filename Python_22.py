from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [x for x in values if isinstance(x, int)]

if __name__ == "__main__":
    user_input = input("Enter values separated by spaces: ")
    values = user_input.split()
    
    processed_values = []
    for value in values:
        try:
            processed_values.append(int(value))
        except ValueError:
            processed_values.append(value)
            
    print(filter_integers(processed_values))