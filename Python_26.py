```
def remove_duplicates(input_string):
    input_list = [int(x) for x in input_string.split(",")]
    return ",".join(map(str, set(map(int, input_list))))