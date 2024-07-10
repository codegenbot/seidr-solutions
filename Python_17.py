music_input = input("Enter music data:\n")  
def parse_music(music_data):  
    return music_data.split('\n')  
print(parse_music(music_input))  