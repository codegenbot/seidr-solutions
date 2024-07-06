import argparse


def double_the_difference(list):
    small = min(list)
    large = max(list)
    diff = large - small
    return 2 * diff


# Prompt user for input
parser = argparse.ArgumentParser()
parser.add_argument("numbers", type=int, nargs="+")
args = parser.parse_args()
lst = args.numbers

# Call function with input
print(double_the_difference(lst))