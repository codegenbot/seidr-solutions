def canvas_info():
    width = int(input("Enter the width of the canvas: "))
    height = int(input("Enter the height of the canvas: "))
    color = input("Enter the color of the canvas (red, blue, green): ")
    return width, height, color


width, height, color = canvas_info()
print(
    f"The dimensions of your blank canvas are {width} inches wide and {height} inches tall. The background is a lovely {color}."
)