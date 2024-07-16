```
def solve():
    while True:
        try:
            s = input("Enter an integer or string: ")
            num = int(s)
            if num < 0:
                return ('-' + base64.b64encode(str(abs(num)).encode('utf-8')).decode('utf-8')).upper()
            else:
                return (base64.b64encode(str(num).encode('utf-8')).decode('utf-8')).upper().replace('+', '-')

        except ValueError:
            print("Welcome to the program!")
            return s.upper()