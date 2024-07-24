```
def digitSum(s):
    return sum(int(c) if c.isdigit() else ord(c.upper()) - 64 for c in s)

try:
    print(digitSum(input("Enter a string: ")))
except Exception as e:
    print(f"Error occurred: {str(e)}")