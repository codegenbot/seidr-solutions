def check(func):
    # Define the check logic here
    if func(3, 4, 5):
        print("Pythagorean Triple")
    else:
        print("Not a Pythagorean Triple")

check(is_pythagorean_triple)