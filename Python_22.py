```
from typing import List, Any

def filter_integers(values: List[Any]) -> list:
    return [value for value in values if isinstance(value, int)]

if __name__ == "__main__":
    user_input = input("Please enter a list of values separated by commas (e.g., 1,2,3,a,b): ")
    
    values = [value.strip() for value in user_input.split(",")]
    
    filtered_values = filter_integers([x for x in map(str, values) if x.isnumeric()])
    print(filtered_values)