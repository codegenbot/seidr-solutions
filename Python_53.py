def add(x: int, y: int):
    return x + y

try:
    # Read multiple lines of input until EOF
    import sys
    input_lines = sys.stdin.read().strip()
    if not input_lines:
        raise ValueError
    
    # Process each line and compute the sum
    for line in input_lines.splitlines():
        x, y = map(int, line.split())
        print(add(x, y))

except (ValueError, EOFError):
    print("Invalid input")