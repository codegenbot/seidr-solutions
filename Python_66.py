```
import string
def digitSum(s):
    return sum(int(c) for c in s.translate(str.maketrans('', '', string.ascii_letters)).isdigit())