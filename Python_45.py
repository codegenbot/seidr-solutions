try:
    with open(__file__) as f:
        if f.read():
            import math

            def triangle_area(a, h):
                return 0.5 * a * h
except (FileNotFoundError, SyntaxError):
    print("Invalid input")