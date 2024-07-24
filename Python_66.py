```python
import string

def digitSum(s):
    translator = str.maketrans('', '', string.ascii_letters + string.punctuation)
    s = s.translate(translator).replace(' ', '')
    return sum(int(c) for c in s if c.isdigit())

input_s = str(input("Enter a string: "))
print(digitSum(input_s))