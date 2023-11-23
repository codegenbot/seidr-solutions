from typing import List, Union

def filter_integers(values: List[Union[int, str]]) -> List[int]:
    return [value for value in values if isinstance(value, int)]

def main():
    values = []
    input_values = input().split()
    for value in input_values:
        if value.isdigit():
            values.append(int(value))
    result = filter_integers(values)
    print(result)

if __name__ == '__main__':
    main()