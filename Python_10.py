import sys

def complete_code(string_input, integer_input):
    return string_input[:integer_input]

string_input = sys.stdin.readline().rstrip()
integer_input = int(sys.stdin.readline().rstrip())
output = complete_code(string_input, integer_input)
print(output)