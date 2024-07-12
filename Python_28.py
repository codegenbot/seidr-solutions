```
def concatenate(input_string: str) -> None:
    strings = input_string.split(',')
    output_string = ','.join(strings)
    print(output_string)