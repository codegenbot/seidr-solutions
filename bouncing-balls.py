    def bouncing_balls():
        start_height = float(input())
        first_bounce_height = float(input())
        num_bounces = int(input())

        bounciness_index = first_bounce_height / start_height

        total_distance = 0
        for _ in range(num_bounces + 1):
            height = start_height * (bounciness_index ** (_ + 1))
            if _ == 0:
                total_distance += abs(2 * height - start_height)
            else:
                total_distance += abs(2 * height) - abs(2 * height - start_height)
        print(round(total_distance, 2))

    if __name__ == "__main__":
        bouncing_balls()