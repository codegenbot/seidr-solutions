```
def calculate_collisions(tracks):
    def get_collision_points(num_tracks):
        collision_points = []
        for i in range(1, num_tracks + 1):
            if i == int((num_tracks - 1) / 3) or i == 2 * int((num_tracks - 1) / 3):
                collision_points.append(i)
        return collision_points

    tracks_range = range(tracks)
    collisions = 0
    for track in tracks_range:
        if track in get_collision_points(tracks):
            collisions += 1
    return collisions