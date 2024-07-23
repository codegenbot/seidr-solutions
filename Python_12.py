from typing import Optional


def longest(strings: list[str]) -> Optional[str]:
    if not strings:
        return None
    max_len = 0
    longest_str = None
    for s in strings:
        if len(s) > max_len:
            max_len = len(s)
            longest_str = s
    return longest_str


input_str = ''
while True:
    user_input = input('Enter a string (or "stop" to finish): ')
    if user_input.lower() == 'stop':
        break
    input_str += user_input + ', '
strings = [s.strip() for s in input_str.split(', ')[:-1]]
print("The longest string is: " + longest(strings)[0])