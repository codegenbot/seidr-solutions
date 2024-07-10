from typing import List

def concatenate() -> str:
    input_str = input("Enter strings separated by comma: ")
    strings_list = input_str.split(',')
    return ''.join(map(str, strings_list))