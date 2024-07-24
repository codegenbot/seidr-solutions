def check(x):
    if x > sum_of_squares(100):
        print("The triangle area is larger than the sum of squares of 1 to 100.")
    else:
        print("The triangle area is smaller than or equal to the sum of squares of 1 to 100.")

base = float(input("Enter the base of the triangle: "))
height = float(input("Enter the height of the triangle: "))

triangle_area = (base*height)/2

check(triangle_area)