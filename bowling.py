frames = input("Please enter the bowling frames (one frame per line): ") 
frames = [frame.replace("-", "") for frame in frames.split("\n")]