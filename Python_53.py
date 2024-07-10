import sys

def add(x, y):
    return x + y

def main():
    print("Enter two integers separated by a space. Enter 'stop' to exit.")
    while True:
        try:
            inputs = sys.stdin.readline().rstrip()
            if inputs == 'stop':
                break
            x, y = map(int, inputs.split())
            result = add(x, y)
            print(result)
        except:
            print("Error: Invalid input")

if __name__ == "__main__":
    main()