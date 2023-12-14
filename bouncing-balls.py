
[CODE]
#!/usr/bin/python
import sys

def main(argv):
    """
    bouncing_balls.py
    Calculates total distance traveled by a ball after some number of bounces, given the starting height and the height after the first bounce.
    Usage: python3 bouncing_balls.py <starting height> <height after first bounce> <number of bounces>
    Returns: total distance traveled by ball as a float
    """

    # Get user input
    try:
        start_height = float(argv[1])
        first_bounce_height = float(argv[2])
        num_bounces = int(argv[3])
    except ValueError:
        print("You must provide three arguments: starting height, height after the first bounce, and number of bounces.")
        return 1
    except IndexError:
        print("You must provide three arguments: starting height, height after the first bounce, and number of bounces.")
        return 1

    # Calculate bounciness index
    try:
        b_index = first_bounce_height / start_height
    except ZeroDivisionError:
        print("Starting height cannot be zero.")
        return 1

    # Calculate distance traveled by ball after n bounces
    dist = (num_bounces * (start_height + first_bounce_height)) / 2

    # Print result to stdout
    print(dist)

# Run main() if we're running as a program and not importing it as a library
if __name__ == "__main__":
    sys.exit(main(sys.argv))
[/CODE]