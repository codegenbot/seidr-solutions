def main():
    starting_height = float(input())
    first_bounce_height = float(input())
    bounces = int(input())

    bounciness_index = first_bounce_height / starting_height
    total_distance = starting_height + first_bounce_height

    for i in range(2, bounces + 1):
        total_distance += first_bounce_height * bounciness_index**i

    print(total_distance)


if __name__ == "__main__":
    main()