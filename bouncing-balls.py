    def bouncing_balls():
        start_height = float(input("Enter starting height: "))
        first_bounce_height = float(input("Enter the height after the first bounce: "))
        bounciness_index = round(first_bounce_height / start_height, 4)
        
        total_distance = (2 * (start_height + first_bounce_height)) * bounciness_index ** (input("Enter number of bounces: "))
        
        return total_distance

    print(round(bouncing_balls(), 4))