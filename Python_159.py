
def eat(number, need):
    total_eaten = number + need
    carrots_left = max(0, remaining - need)
    return [total_eaten, carrots_left]

def main():
    # Test the eat function with different inputs
    print(eat(4, 5)) # Should be: 9, 1
    print(eat(4, 10)) # Should be: 14, -6
    print(eat(4, 20)) # Should be: 24, -16

if __name__ == "__main__":
    main()